package wordcount;
import java.io.EOFException;
import java.util.*;

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
                        buffer = "";
                    }
                }
            }
            catch(EOFException e)
            {
                if (buffer.length() != 0)
                {
                }
                System.out.println("Finished Reading File");
                finished = true;
            }
        }
    }

}

