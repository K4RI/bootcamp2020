import java.io.*;
import java.net.*;

class ClientTCP {
    public static void main (String[] args) throws Exception {

        BufferedReader lectureLocaleDuClient = new BufferedReader(new InputStreamReader(System.in));
        Socket socketCliente = new Socket("12.034.056.078", 9876);
        DataOutputStream emissionVersServeur = new DataOutputStream(socketCliente.getOutputStream());
        BufferedReader receptionDuServeur = new BufferedReader(new InputStreamReader(socketCliente.getInputStream()));
        String phrase = lectureLocaleDuClient.readLine();
        emissionVersServeur.writeBytes(phrase + '\n');
        String phraseRepondue= receptionDuServeur.readLine();
        System.out.println("from server: "+ phraseRepondue);
        
        socketCliente.close();;
    }
}