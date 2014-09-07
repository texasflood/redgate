package wordcount;

public class WordData
{
    private String word;
    private int frequency;

    public void WordData (String inputWord)
    {
        word = inputWord.toLowerCase();
        frequency = 1;
    }

    public boolean checkEquality (String potentialDuplicate)
    {
        return word.equals(potentialDuplicate.toLowerCase());
    }

    public void incrFreq()
    {
        frequency++;
    }

    public boolean thisWordPrecedes(String wordToCompare)
    {
        return (word.compareTo(wordToCompare) < 0 ? true : false);
    }

    public boolean thisFreqPrecedes(int freqToCompare)
    {
        return ((frequency - freqToCompare) < 0 ? true : false);
    }

    public String toString()
    {
        return (word + ": " + frequency);
    }
}
