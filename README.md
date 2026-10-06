Détecteur d'Obstacles Autonome pour Malvoyants

 I Description
Ce projet est un système embarqué conçu pour être fixé sur une chaussure afin d'assister les personnes malvoyantes. Il détecte les obstacles en temps réel et avertit l'utilisateur, tout en assurant sa visibilité dans l'obscurité.

II  Matériel utilisé (Composants)
* **Microcontrôleur :** Carte Arduino (Uno / Nano)
* **Capteur de distance :** Module Ultrasons HC-SR04
* **Capteur de lumière :** Photorésistance (LDR)
* **Actionneurs :** Buzzer passif/actif, LEDs
* **Autre :** Résistances, câbles de prototypage (Jumper wires), batterie/pile.

 III Comment ça fonctionne (Logique du système)
1. **Détection d'obstacles :** Le capteur HC-SR04 mesure la distance en continu. Plus l'obstacle est proche de la chaussure, plus la fréquence des bips du buzzer augmente.
2. **Sécurité nocturne :** La photorésistance (LDR) capte la luminosité ambiante. Si l'utilisateur marche dans un environnement sombre, les LEDs s'allument automatiquement pour signaler sa présence aux autres piétons ou véhicules.

IV Schéma de câblage

<img width="709" height="742" alt="basket-arduino" src="https://github.com/user-attachments/assets/27550b80-af5d-4cb7-a912-44d5fac3c674" />



V Installation et Utilisation
1. Cloner ce dépôt : `git clone https://github.com/konseadam-coder/detecteur-obstacle-arduino.git`
2. Ouvrir le fichier `.ino` avec l'IDE Arduino.
3. Connecter la carte Arduino en USB.
4. CompilerPour un projet matériel (hardware) impliquant de l'électronique embarquée, le README doit impérativement lister les composants physiques, expliquer la logique du circuit et détailler le comportement du système interactif. 

```markdown
 Détecteur d'Obstacles Autonome pour Malvoyants

 Description
Ce projet est un système embarqué conçu pour être fixé sur une chaussure afin d'assister les personnes malvoyantes. Il détecte les obstacles physiques en temps réel et avertit l'utilisateur de la proximité d'un danger via des signaux sonores et visuels.

 Composants Matériels (Hardware)
* **Microcontrôleur :** Carte Arduino (ex: Uno ou Nano)
* **Capteur de distance :** Module à ultrasons HC-SR04
* **Capteur de luminosité :** Photorésistance (LDR)
* **Actionneurs :** Buzzer (alerte sonore) et LEDs (alerte visuelle)
* **Divers :** Résistances, fils de connexion, alimentation embarquée (ex: pile 9V)

 Logiciel
* **Langage :** C/C++
* **Environnement :** Arduino IDE

 Logique de Fonctionnement
1. Le capteur HC-SR04 émet des ondes ultrasonores en continu pour mesurer la distance des objets environnants.
2. Si un obstacle est détecté à une distance inférieure au seuil défini dans le code, le système déclenche une alerte.
3. Le buzzer émet un signal sonore pour avertir l'utilisateur.
4. Les LEDs s'activent pour fournir un repère visuel (utile pour sécuriser l'entourage de la personne).
5. La photorésistance (LDR) analyse la lumière ambiante pour adapter le système (ex: gestion des LEDs en environnement sombre).

 Câblage et Schéma
*(Ajouter ici une image du schéma de câblage réalisé sur Tinkercad/Fritzing ou une photo claire du montage)*
* `VCC` du capteur HC-SR04 branché sur la broche `5V` de l'Arduino.
* `GND` du capteur branché sur la broche `GND`.
* `TRIG` branché sur la broche numérique [Insérer ton numéro de broche].
* `ECHO` branché sur la broche numérique [Insérer ton numéro de broche].

 Installation et Déploiement
1. Cloner ce dépôt : `git clone [https://github.com/konseadam-coder/nom-du-depot.git](https://github.com/konseadam-coder/nom-du-depot.git)`
2. Ouvrir le fichier principal `.ino` avec l'IDE Arduino.
3. Connecter la carte Arduino à l'ordinateur via USB.
4. Sélectionner le bon port COM et le type de carte dans le menu `Outils`.
5. Cliquer sur `Téléverser` pour compiler et injecter le code dans le microcontrôleur.
