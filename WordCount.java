package wordcount;
import java.io.EOFException;
import java.util.*;

public class WordCount 
{
    private static Vector<String> words = new Vector<String>(0, 1);
    private static Vector<Integer> wordFreqs = new Vector<Integer>(0, 1);
    public static void main(String[] args)
    {
        SimpleCharacterReader charRead = new SimpleCharacterReader();
        wordCounter(charRead);
    }
    private static void wordCounter(SimpleCharacterReader charRead)
    {
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
                        addToWords(buffer);
                        buffer = "";
                    }
                }
            }
            catch(EOFException e)
            {
                if (buffer.length() != 0)
                {
                    addToWords(buffer);
                }
                System.out.println("Finished Reading File");
                System.out.println(words);
                System.out.println(wordFreqs);
                System.out.println("words size: " + words.capacity());
                System.out.println("wordFreqs size: " + wordFreqs.capacity());
                words = new Vector<String>(0, 1);
                wordFreqs = new Vector<Integer>(0, 1);
                finished = true;
            }
        }
    }
    private static void addToWords(String buffer)
    {
        buffer = buffer.toLowerCase();
        boolean foundBuffer = false;
        for (int i = 0; i < words.capacity(); i++)
        {
            if ((words.elementAt(i)).equals(buffer))
            {
                wordFreqs.setElementAt(wordFreqs.elementAt(i) + 1, i);
                foundBuffer = true;
            }
        }
        if (!foundBuffer)
        {
            words.addElement(buffer);
            wordFreqs.addElement(1);
        }
    }

}
