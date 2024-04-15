<!DOCTYPE html>
<html lang="en">
<head>
  <title class="thanks-title">Thanks for Participating</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <style>
    .thanks-title {
  font-size: 2em;
  font-weight: bold;
  background: linear-gradient(to right, #ff0000, #00ff00, #0000ff);
  -webkit-box-shadow: 0px 0px 10px rgba(0, 0, 0, 0.5);
  box-shadow: 0px 0px 10px rgba(0, 0, 0, 0.5);
  text-align: center;
  opacity: 0;
  transition: opacity 0.5s ease-in-out;
  animation: color-cycle 1s infinite;
}

@keyframes color-cycle {
  0% {
    background-color: #ff0000;
  }
  25% {
    background-color: #00ff00;
  }
  50% {
    background-color: #0000ff;
  }
  75% {
    background-color: #ff0000;
  }
  100% {
    background-color: #00ff00;
  }
}

  </style>
</head>
<body>
  <h1 name='thanks'>Thanks for Participating!</h1>
  <p>We appreciate your participation in our event. We hope you enjoyed yourself and learned something new.</p>
</body>
</html>
