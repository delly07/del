<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Functional Calculator</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="calculator">
        <input type="text" id="display" disabled />
        <div class="buttons">
            <button class="button" onclick="appendValue('1')">1</button>
            <button class="button" onclick="appendValue('2')">2</button>
            <button class="button" onclick="appendValue('3')">3</button>
            <button class="button" onclick="appendValue('+')">+</button>
            <button class="button" onclick="appendValue('4')">4</button>
            <button class="button" onclick="appendValue('5')">5</button>
            <button class="button" onclick="appendValue('6')">6</button>
            <button class="button" onclick="appendValue('-')">-</button>
            <button class="button" onclick="appendValue('7')">7</button>
            <button class="button" onclick="appendValue('8')">8</button>
            <button class="button" onclick="appendValue('9')">9</button>
            <button class="button" onclick="appendValue('*')">*</button>
            <button class="button" onclick="appendValue('0')">0</button>
            <button class="button" onclick="appendValue('.')">.</button>
            <button class="button" onclick="clearDisplay()">C</button>
            <button class="button" onclick="appendValue('/')">/</button>
            <button class="button" onclick="calculateResult()">=</button>
        </div>
    </div>

    <script src="script.js"></script>
</body>
</html>
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: Arial, sans-serif;
    background-color: #f0f0f0;
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
}

.calculator {
    background-color: #fff;
    border-radius: 10px;
    padding: 20px;
    box-shadow: 0 0 15px rgba(0, 0, 0, 0.1);
}

#display {
    width: 100%;
    height: 50px;
    font-size: 2rem;
    text-align: right;
    margin-bottom: 20px;
    padding: 10px;
    border: 1px solid #ccc;
    border-radius: 5px;
}

.buttons {
    display: grid;
    grid-template-columns: repeat(4, 1fr);
    gap: 10px;
}

.button {
    font-size: 1.5rem;
    padding: 20px;
    background-color: #f0f0f0;
    border: 1px solid #ccc;
    border-radius: 5px;
    cursor: pointer;
    transition: background-color 0.3s ease;
}

.button:hover {
    background-color: #ddd;
}

.button:active {
    background-color: #ccc;
}
let display = document.getElementById('display');

function appendValue(value) {
    display.value += value;
}

function clearDisplay() {
    display.value = '';
}

function calculateResult() {
    try {
        let result = eval(display.value);
        if (result === 2) {
            display.value = 'isa kang nigga';
        } else {
            display.value = result;
        }
    } catch (error) {
        display.value = 'Error';
    }
}

