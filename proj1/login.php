<?php

$table_name = "student_registration";
// Connect to the database
$db = new PDO('mysql:host=localhost;dbname=student', 'root', '');

// Get the form data
$roll_no = $_POST['roll_no'];
$password = $_POST['password'];

// Prepare the SQL SELECT statement
$sql = "SELECT * FROM student_registration WHERE roll_no = ? AND password = ?";
$stmt = $db->prepare($sql);

// Bind the form data to the SQL statement
$stmt->bindParam(1, $roll_no);
$stmt->bindParam(2, $password);

// Execute the SQL statement and fetch the user details
$stmt->execute();
$user = $stmt->fetch(PDO::FETCH_ASSOC);

// Check if the user is found
if ($user) {
    // Extract user details from the fetched array
    $name = $user['name'];
    $roll_no = $user['roll_no'];
    $contact_no = $user['contact_no'];
    $blood_group = $user['blood_group'];
    $section = $user['section'];
    $branch = $user['branch'];
    $gender = $user['gender'];

    // Print the user details
    echo "Name: $name\n";
    echo "Roll No.: $roll_no\n";
    echo "Contact No.: $contact_no\n";
    echo "Blood Group: $blood_group\n";
    echo "Section: $section\n";
    echo "Branch: $branch\n";
    echo "Gender: $gender\n";
} else {
    echo "Invalid login. Please try again.";
}
