package wordcount;
import java.util.Comparator;

public class CustomComparator implements Comparator<WordData> {
    @Override
    public int compare(WordData firstWord, WordData secondWord) {
        int comparison;
        comparison = secondWord.getFreq() - firstWord.getFreq();
        if (comparison == 0)
        {
            comparison = firstWord.getWord().compareTo(secondWord.getWord());
        }
        return comparison;
    }
}
