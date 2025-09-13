function updateClock() {
  document.getElementById("clock").innerText = new Date().toLocaleTimeString();
}
setInterval(updateClock, 1000);
updateClock();

function openApp(app) {
  alert(app + " is under construction!");
}
