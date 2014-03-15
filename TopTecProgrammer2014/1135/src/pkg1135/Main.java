/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg1135;

/**
 *
 * @author Enrique
 */
import java.text.DecimalFormat;
import java.util.Scanner;
public class Main {
    public static double  [][] poli = new double [2][11];
    /**
     * @param args the command line arguments
     */
    public static int convertir (String a){
        int i=0;
        while(a.length()!=0){
            if(a.indexOf("x")==-1){
                poli[0][i]=Double.parseDouble(a);
                poli[1][i]=0;
                return i+1;
            }
            else if(a.indexOf("^")==-1){
                int pos = a.indexOf("x");
                if((a.substring(0,1).equals("+"))&& (pos==1)){
                    poli[0][i]=1;
                    poli[1][i]=1;
                    a=a.substring(2);
                }
                else if((a.substring(0,1).equals("-"))&&(pos==1)){
                    poli[0][i]=-1;
                    poli[1][i]=1;
                    a=a.substring(2);
                }
                else if(pos==1){
                    poli[0][i]=Double.parseDouble(a.substring(0,1));
                    poli[1][i]=1;
                    a=a.substring(2);
                }
                else if(pos==0){
                    poli[0][i]=1;
                    poli[1][i]=1;
                    a=a.substring(1);
                }
                else{
                    poli[0][i]=Double.parseDouble(a.substring(0, 2));
                    poli[1][i]=1;
                    a=a.substring(3);
                }
            }
            else{
                int pos=a.indexOf("x");
                if((a.substring(0,1).equals("+"))&&(pos==1)){
                    poli[0][i]=1;
                    poli[1][i]=Double.parseDouble(a.substring(3,4));
                    a=a.substring(4);
                }
                else if((a.substring(0,1).equals("-"))&&(pos==1)){
                    poli[0][i]=-1;
                    poli[1][i]=Double.parseDouble(a.substring(3,4));
                    a=a.substring(4);
                }
                else if(pos==1){
                    poli[0][i]=Double.parseDouble(a.substring(0,1));
                    poli[1][i]=Double.parseDouble(a.substring(3,4));
                    a=a.substring(4);
                }
                else if(pos==0){
                    poli[0][i]=1;
                    poli[1][i]=Double.parseDouble(a.substring(2,3));
                    a=a.substring(3);
                }
                else{
                    poli[0][i]=Double.parseDouble(a.substring(0, 2));
                    poli[1][i]=Double.parseDouble(a.substring(4,5));
                    a=a.substring(5);
                }
            }
            i++;
        }
        return i;
    }
    public static void main(String[] args) {
        int n=0,m=1, cant=0;
        String ent;
        Scanner cin=new Scanner(System.in);
        n=cin.nextInt();
        DecimalFormat df = new DecimalFormat("#");
        while(n>0){
            int eval=cin.nextInt();
            ent=cin.next();
            System.out.println("POLYNOMIAL "+m);
            System.out.println(ent);
            cant=convertir(ent);
            for(int i=0; i<cant; i++){
                poli[0][i]*=poli[1][i];
                poli[1][i]--;
            }
            if((cant==1)&&(poli[1][0]==-1)){
                System.out.println(0);
                System.out.println(0);
                System.out.println(0);
                System.out.println(0); 
                if(n==1)
                    break;
                else
                    continue;
            }
            String p="";
            for(int i=0; i<cant; i++){
                if(poli[1][i]==-1){
                    break;
                }
                if(poli[1][i]>1){
                    p+=df.format(poli[0][i])+"x"+"^"+df.format(poli[1][i]);
                    if(poli[0][i+1]>=0){
                        p+="+";
                    }
                }
                else if(poli[1][i]==1){
                    p+=df.format(poli[0][i])+"x";
                    if(poli[0][i+1]>=0){
                        p+="+";
                    }
                }
                else if(poli[1][i]==0){
                    p+=df.format(poli[0][i])+"";
                }
            }
            if((p.substring(p.length()-1,p.length()).equals("+"))|(p.substring(p.length()-1, p.length()).equals("-"))){
                p=p.substring(0, p.length()-1);
            }
            System.out.println(p);
            p="";
            String a ="";
            double resp=0;
            for(int i=0; i<cant; i++){
                if(poli[1][i]==-1){
                    break;
                }
                if(poli[1][i]>1){
                    p+=df.format(poli[0][i])+"("+eval+")"+"^"+df.format(poli[1][i]);
                    if(poli[0][i+1]>=0){
                        p+="+";
                        a+=df.format(poli[0][i]*Math.pow((double)eval, poli[1][i]))+"+";
                    }
                    else{
                        a+=df.format(poli[0][i]*Math.pow((double)eval, poli[1][i]));
                    }
                    resp+=poli[0][i]*Math.pow((double)eval, poli[1][i]);
                }
                else if(poli[1][i]==1){
                    p+=df.format(poli[0][i])+"("+eval+")";
                    if(poli[0][i+1]>=0){
                        a+=df.format(poli[0][i]*eval)+"+";
                        p+="+";
                    }
                    else{
                        a+=df.format(poli[0][i]*eval);
                    }
                    resp+=poli[0][i]*Math.pow((double)eval, poli[1][i]);
                }
                else if(poli[1][i]==0){
                    p+=df.format(poli[0][i])+"";
                    a+=df.format(poli[0][i])+"";
                    resp+=poli[0][i];
                }
            }
            if((p.substring(p.length()-1,p.length()).equals("+"))|(p.substring(p.length()-1, p.length()).equals("-"))){
                p=p.substring(0, p.length()-1);
            }
            if((a.substring(a.length()-1,a.length()).equals("+"))|(a.substring(a.length()-1, a.length()).equals("-"))){
                a=a.substring(0, a.length()-1);
            }
            String e="";
            if(a.length()>1){
                for(int i=1; i<a.length(); i++){
                    char b = a.charAt(i);
                    char c=a.charAt(i-1);
                    if(b=='0'){
                        if(c=='-'){
                            e+="+";
                            continue;
                        }
                    }
                    e+=c+"";
                }
                if(e.charAt(0)=='+'){
                    e=e.substring(1,e.length());
                }
                e+=a.substring(a.length()-1, a.length());
            }
            else    e=a;
            System.out.println(p);
            System.out.println(e);
            System.out.println(df.format(resp));
            n--;
            m++;
        }
    }
}
