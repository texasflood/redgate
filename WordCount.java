package wordcount;
import java.io.EOFException;
import java.util.*;

public class WordCount 
{
    public static void main(String[] args)
    {
        SimpleCharacterReader charRead = new SimpleCharacterReader();
        String buffer = new String("");
        Vector<String> words = new Vector<String>(0);
        while (true)
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
                        words.addElement(buffer);
                    }
                    buffer = "";
                }
            }
            catch(EOFException e)
            {
                if (buffer.length() != 0)
                {
                    words.addElement(buffer);
                }
                System.out.println("Finished Reading File");
                System.out.println(words);
                break;
            }
        }
    }
}
