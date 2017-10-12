// Definitionen
length = 100;    // Länge
width = 70;      // Breite
factor = 1.5;    // Versatz der einzelnen Schuppen

// Bodenplatte
cube([(width+1)*factor, (length+1)*factor, 0.3]);

// Schuppenzeilen
for (y = [1 : length]) {

  // Schuppenspalten
  for (x = [1 : width]) {

    // verkanteter Zylinder als Schuppe
    translate([x * factor, y * factor, 0])  rotate([25, 0, 0]) cylinder(r=1);
  }
}