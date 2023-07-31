void random_page() {

// Generates a random number 0-8
int result = random(0, 9);

// Stores random number selected
int progression_selected = result;

  // Pop - Basic
  if (progression_selected == 0) {
    prog_chosen = 11;
  }
  
  // Pop - Basic Variation
  else if (progression_selected == 1) {
    prog_chosen = 12;
  }

  // Pop - Sad
  else if (progression_selected == 2) {
    prog_chosen = 13;
  }
  
  // Rock - Basic
  else if (progression_selected == 3) {
    prog_chosen = 21;
  }

  // Rock - Basic Variation
  else if (progression_selected == 4) {
    prog_chosen = 22;
  }

  // Rock - Classic
  else if (progression_selected == 5) {
    prog_chosen = 23;
  }

  // Blues - Basic
  else if (progression_selected == 6) {
    prog_chosen = 31;
  }

  // Blues - 50s doo wop
  else if (progression_selected == 7) {
    prog_chosen = 32;
  }

  // Blues - 12 Bars Blues
  else if (progression_selected == 8) {
    prog_chosen = 33;
  }
}
