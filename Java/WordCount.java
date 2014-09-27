package wordcount;
import java.io.EOFException;
import java.util.Collections;
import java.util.ArrayList;
import java.util.List;

public class WordCount 
{
    public static void main(String[] args)
    {
        SimpleCharacterReader charRead = new SimpleCharacterReader();
        wordCounter(charRead);
    }

    private static void wordCounter(SimpleCharacterReader charRead)
    {
        List<WordData> wordsList = new ArrayList<WordData>();
        String buffer = new String("");
        boolean finished = false;
        while (!finished)
        {
            try
            {
                char character = charRead.GetNextChar();
                int characterDec = (int)character;
                if (characterDec == 39 || (characterDec > 64 && characterDec < 91) || (characterDec > 96 && characterDec < 123))
                {
                    buffer = buffer + Character.toString(character);
                }
                else
                {
                    if (buffer.length() != 0)
                    {
                        addWord(buffer, wordsList);
                        buffer = "";
                    }
                }
            }
            catch(EOFException e)
            {
                if (buffer.length() != 0)
                {
                    addWord(buffer, wordsList);
                }
                Collections.sort(wordsList, new CustomComparator());
                System.out.println("Finished Reading File");
                for (int i = 0; i < wordsList.size(); i++)
                {
                    System.out.println(wordsList.get(i));
                }
                finished = true;
            }
        }
    }
    private static void addWord(String buffer, List<WordData> wordsList)
    {
        boolean foundWord = false;
        for (int i = 0; i < wordsList.size(); i++)
        {
            if ((wordsList.get(i)).checkEquality(buffer))
            {
                (wordsList.get(i)).incrFreq();
                foundWord = true;
                break;
            }
        }
        if (!foundWord)
        {
            wordsList.add(new WordData(buffer));
        }
    }
}

