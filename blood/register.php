<!DOCTYPE html>
<html>
    <body>
        <form action="/blood_donation_registration" method="post">
            <label for="name">Name:</label>
            <input type="text" name="name" required>
            <label for="roll_no">Roll No.:</label>
            <input type="number" name="roll_no" required>
            <label for="branch">Branch:</label>
            <input type="text" name="branch" required>
            <label for="section">Section:</label>
            <input type="text" name="section" required>
            <label for="gender">Gender:</label>
            <select name="gender" required>
              <option value="male">Male</option>
              <option value="female">Female</option>
              <option value="other">Other</option>
            </select>
            <label for="age">Age:</label>
            <input type="number" name="age" required>
            <label for="phno">Phone No.:</label>
            <input type="tel" name="phno" required>
            <input type="submit" value="Submit">
          </form>
          
    </body>
</html>
<?php

// Connect to the Oracle SQL database
$db = new PDO('oci:dbname=localhost:1521/xe', 'system', 'password');

// Get the form data
$name = $_POST['name'];
$rollNo = $_POST['roll_no'];
$branch = $_POST['branch'];
$section = $_POST['section'];
$gender = $_POST['gender'];
$age = $_POST['age'];
$phno = $_POST['phno'];

// Insert the data into the database
$stmt = $db->prepare('INSERT INTO BLOOD_DONATION_REGISTRATION (NAME, ROLL_NO, BRANCH, SECTION, GENDER, AGE, PHNO) VALUES (:name, :roll_no, :branch, :section, :gender, :age, :phno)');
$stmt->bindParam(':name', $name);
$stmt->bindParam(':roll_no', $rollNo);
$stmt->bindParam(':branch', $branch);
$stmt->bindParam(':section', $section);
$stmt->bindParam(':gender', $gender);
$stmt->bindParam(':age', $age);
$stmt->bindParam(':phno', $phno);
$stmt->execute();

// Redirect to the success page
header('Location: success.php');

?>
