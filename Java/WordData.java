package wordcount;

public class WordData
{
    private String word;
    private int frequency;

    public WordData (String inputWord)
    {
        word = inputWord.toLowerCase();
        frequency = 1;
    }

    public boolean checkEquality (String potentialDuplicate)
    {
        return word.equals(potentialDuplicate.toLowerCase());
    }

    public int getFreq()
    {
        return frequency;
    }

    public String getWord()
    {
        return word;
    }

    public void incrFreq()
    {
        frequency++;
    }

    public String toString()
    {
        return (word + ": " + frequency);
    }
}
