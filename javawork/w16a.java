import java.io.*;
import java.net.*;

class server {
    public static void main(String[] args) throws IOException {
        ServerSocket serverSocket = new ServerSocket(5000);
        System.out.println("Server started. Waiting for a client to connect...");

        Socket socket = serverSocket.accept();
        System.out.println("Client connected.");

        BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        PrintWriter out = new PrintWriter(socket.getOutputStream(), true);

        String input = in.readLine();
        double radius = Double.parseDouble(input);
        double area = Math.PI * radius * radius;

        out.println(area);

        socket.close();
        serverSocket.close();
        System.out.println("Connection closed.");
    }
}
