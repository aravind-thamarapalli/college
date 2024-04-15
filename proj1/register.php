<?php

// Connect to the database
$db = new PDO('mysql:host=localhost;dbname=student', 'root', '');

// Prepare the SQL INSERT statement
$sql = "INSERT INTO student_registration (name, roll_no, contact_no, blood_group, section, branch, gender, password) VALUES (?, ?, ?, ?, ?, ?, ?, ?)";
$stmt = $db->prepare($sql);

// Bind the form data to the SQL statement
$stmt->bindParam(1, $_POST['name']);
$stmt->bindParam(2, $_POST['roll_no']);
$stmt->bindParam(3, $_POST['contact_no']);
$stmt->bindParam(4, $_POST['blood_group']);
$stmt->bindParam(5, $_POST['section']);
$stmt->bindParam(6, $_POST['branch']);
$stmt->bindParam(7, $_POST['gender']);
$stmt->bindParam(8, $_POST['password']);

// Execute the SQL statement
// Get the form data
$name = $_POST['name'];
$roll_no = $_POST['roll_no'];
$contact_no = $_POST['contact_no'];
$blood_group = $_POST['blood_group'];
$section = $_POST['section'];
$branch = $_POST['branch'];
$gender = $_POST['gender'];
$password = $_POST['password'];

// Validate the data
if (empty($name)) {
  // Display an error message to the user
  exit;
}

// Insert the record into the database
$stmt = $db->prepare('INSERT INTO student_registration (name, roll_no, contact_no, blood_group, section, branch, gender, password) VALUES (?, ?, ?, ?, ?, ?, ?, ?)');
$stmt->bindParam(1, $name);
$stmt->bindParam(2, $roll_no);
$stmt->bindParam(3, $contact_no);
$stmt->bindParam(4, $blood_group);
$stmt->bindParam(5, $section);
$stmt->bindParam(6, $branch);
$stmt->bindParam(7, $gender);
$stmt->bindParam(8, $password);
$stmt->execute();

// Close the database connection
$db = null;

// Redirect the user to a confirmation page
header('Location: login.html');

?>