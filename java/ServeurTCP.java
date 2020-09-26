import java.io.*;
import java.net.*;
class ServeurTCP {
    
    public static void main (String[] args) throws Exception {
        String phraseClient;
        String phraseEnCapitales;
        ServerSocket socketBienvenue = new ServerSocket(9876);
        Socket socketCliente = socketBienvenue.accept();
        BufferedReader receptionDuClient = new BufferedReader(new InputStreamReader(socketCliente.getInputStream()));
        DataOutputStream emissionVersClient = new DataOutputStream(socketCliente.getOutputStream());
        phraseClient = receptionDuClient.readLine();
        phraseEnCapitales = phraseClient.toUpperCase()+'\n';
        emissionVersClient.writeBytes(phraseEnCapitales);
        
        
        socketCliente.close();
        socketBienvenue.close();
    }
}