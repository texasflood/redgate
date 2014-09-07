package wordcount;
import java.util.*;

public class CustomComparator implements Comparator<WordData> {
    @Override
    public int compare(WordData o1, WordData o2) {
        int c;
        c = o2.getFreq() - o1.getFreq();
        if (c == 0)
        {
            c = o1.getWord().compareTo(o2.getWord());
        }
        return c;
    }
}
