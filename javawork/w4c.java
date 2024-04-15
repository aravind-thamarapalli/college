import java.util.*;
class anagrams
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("\n enter the string");
        String s = sc.nextLine();
        System.out.println("\n enter second string");
        String h = sc.nextLine();
        int n = s.length();
        int n1 = h.length();
        char[] c = s.toCharArray();
        char[] b = h.toCharArray();
        int i,x=0;
		if(n==n1)
		{
			Arrays.sort(c);
			Arrays.sort(b);
			for(i=0;i<n1;i++)
			{
				if(c[i]==b[i])
				{
					x++;
				}
			}
			if(x==n)
			{
				System.out.println("\n anagram");
			}
			else
			{
				System.out.println("\n not anagram");
			}
		}
		else
		{
			System.out.println("\n not anagram");
		}
    }
}