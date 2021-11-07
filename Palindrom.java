package lakscode.problemsolving;

public class Palindrom {

    public static void main(String[] args) {
        tes("ses");
        System.out.println(tes2("sestes")==true?"polindrom":"bukan polindrom");
        System.out.println(tes3("sesest")==true?"polindrom":"bukan polindrom");
        System.out.println(tes4("ssesss",0)==true?"polindrom":"bukan polindrom");

    }
   public static void tes(String value){
       String temp="";
        for (int i=value.length()-1;i>=0;i--){
            temp = temp + value.charAt(i);
        }
       System.out.println(temp.equals(value)?"polindrom":"bukan polindrom");
   }
   public static boolean tes2(String value){

        for (int i=0;i<value.length()/2;i++){
            if (value.charAt(i) != value.charAt(value.length()-i-1)){
                return false;
            }
        }
        return true;
   }

   public static boolean tes3(String value){
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append(value);
        stringBuffer.reverse();
        return stringBuffer.toString().equals(value)?true:false;
   }

   public static boolean tes4(String value, int indexx){
        if (indexx < value.length()/2){
            if (value.charAt(indexx) != value.charAt(value.length()-1-indexx)){
                return false;
            }else {
                return tes4(value,indexx+1);
            }
        }else {
            return true;
        }
   }

}
