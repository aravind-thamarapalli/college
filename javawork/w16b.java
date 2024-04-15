import java.io.*;
import java.net.*;

class client {
    public static void main(String[] args) throws IOException {
        Socket socket = new Socket("localhost", 5000);
        System.out.println("Connected to the server.");

        BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        PrintWriter out = new PrintWriter(socket.getOutputStream(), true);

        out.println(5);

        String response = in.readLine();
        System.out.println("Area of the circle is: " + response);

        socket.close();
        System.out.println("Connection closed.");
    }
}
