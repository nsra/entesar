import java.util.Scanner;
import java.util.Arrays;
public class prossesses2D {
        public static void main(String[] args) {
    	Scanner input =new Scanner (System.in);
        System.out.print("Enter the number of raws then the number of coloms ");
         int i=input.nextInt(); 
         	int j=input.nextInt();
        int sum1=0,sum2=0,mult1=1,mult2=1,sumDi=0,SumUp=0,SumLow=0;
        int [][]array=new int[i][j];
   System.out.print("Enter the total array ");
      for ( i=0; i<array.length;i++)
        for( j=0;j<array[i].length;j++)
        	array[i][j]=input.nextInt();
        	int max=array[0][0],min=array[0][0]; 	  
       		
     for ( i=0; i<array.length;i++){
       for( j=0;j<array[i].length;j++){
       
            sum1+=array[i][j];sum2+=array[i][j];
            mult1*=array[i][j];mult2*=array[i][j];
            if(array[i][j]>=max)max=array[i][j];
            if(array[i][j]<=min)min=array[i][j];
            if(i==j)sumDi+=array[i][j];
            if(i>j)SumLow+=array[i][j];
            if(i<j)SumUp+=array[i][j];
            }
            Arrays.sort(array[i]);
   System.out.println(
        "\n the sum of raw number "+(i+1)+" = "+sum2+", its multibly= "+mult2+
        		", its average= "+(sum2*1.0)/array[i].length+", its max= "+array[i][array[i].length-1]+
        				" and its min= "+array[i][0]);
        sum2=0;mult2=1;
        if((i)==array.length-1)
    System.out.print("\nthe total sum= "+sum1+",the total multibly= "+mult1+",its max= "+max+
   	",the total average= "+(sum1*1.0)/array[i].length*array.length+" and its min= "+min+" \nsum upper diagonal= "+SumUp
   		+" Sum main diagonal= "+sumDi+" sum under diagonal= "+SumLow);     
        			 
        }
        SumColomns(array,0,0);
    }
   public static void SumColomns(int[][]array,int max,int min) {
   	int sum=0;//int max ; int min;
   	 for (int j=0; j<array.length;j++){
   	 //max=0,min=0;
       for(int i=0;i<array[j].length;i++){
        max=array[0][j];
       if(array[i][j]>max)max=array[i][j];
         min=array[0][j];
       if(array[i][j]<min)min=array[i][j];
   	     sum+=array[i][j];
   	     
       }
   	     System.out.println("\nthe Sum of colomn"+(j+1)+"= "+sum+" , its max = "+max+" and its min = "+min);
   	     sum=0;max=0;min=0;
   	 }
   	     
   }
    
}
