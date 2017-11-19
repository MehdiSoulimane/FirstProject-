    import processing.serial.*;
    long time;
    Serial myPort;
    int xPos ;
    float oldHeartrateHeight = 0;
    float heartrateHeight;
    PrintWriter output;
    void setup () {
    
      
    size(500, 400);
    frameRate(30);

    // Setup which serial port to use.
    // This line might change for different computers.
    myPort = new Serial(this, "COM5", 9600);
    output = createWriter("cardio.csv");
    // set inital background:
    background(0);
    }

    void draw () {
       
       output.print(oldHeartrateHeight+";"+time+";"); // la creation et l'ecriture de la valeur dans le fichier.csv

       output.println(); // Ajoute saut de ligne 
       output.flush(); // Ecrit les données du PrintWriter dans le fichier
  
    stroke(0,0);
    println(oldHeartrateHeight+";"+time);
   
    line(xPos - 1, height - oldHeartrateHeight, xPos, height - heartrateHeight);
    oldHeartrateHeight = heartrateHeight;
    // at the edge of the screen, go back to the beginning:
    if (xPos >= width) {
    xPos = 1;
    background(0);
    } else {
    // increment the horizontal position:
    xPos++;
    }
    }

    void serialEvent (Serial myPort) {
    // read the string from the serial port.
    String inString = myPort.readStringUntil('\n');

    if (inString != null) {
    // trim off any whitespace:
    inString = trim(inString);
    // convert to an int
    println(inString);
    int currentHeartrate = int(inString);
   heartrateHeight = map(currentHeartrate, 0, 1023, 0, height);
    // draw the Heartrate BPM Graph.
  
    }
 

    }