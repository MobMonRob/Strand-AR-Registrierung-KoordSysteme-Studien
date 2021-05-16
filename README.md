# ARCore
1. Der Ordner enthält eine .apk-Datei der App, die auf ein Smartphone kopiert und dort installiert werden kann. 
2. Außerdem ist weiterhin ein Ordner enthalten, der das Unity-Projekt darstellt (*AR-App*). Das Projekt wurde mit Unity 2019.4.13f1 erstellt. In dem Projekt sind alle benötigten Ressourcen enthalten. Das Projekt kann in Unity geöffnet werden und enthält u.a. zwei Skripte im Ordner *Assets -> Scripts* (C#-Dateien), die die eigentliche Logik implementieren. Um die Logik anzupassen, können die beiden Skripte bearbeitet werden. Es müssen noch einige Einstellungen angepasst und Voraussetzungen erfüllt werden:
	- Innerhalb von Unity muss ein *Android module* installiert sein, um die App für ein Android-Gerät erstellen zu können ([Doku](https://docs.unity3d.com/Manual/GettingStartedAddingEditorComponents.html)). Das Modul kann alternativ innerhalb der Build-Settings (File -> Build Settings) installiert werden.
	- Im Anschluss muss innerhalb der Build-Settings *Android* als Ziel-Plattform ausgewählt werden, indem auf den Button *Switch Platform* geklickt wird.
	- Danach muss in den Project-Settings (Edit -> Project Settings -> Player -> Android settings -> Other settings) das *Minimum API Level* auf *Android 7.0* gesetzt werden. Hier können auch weitere Einstellungen (z.B. Name der App) geändert werden. 
	- Wenn ein Smartphone mit dem Computer verbunden wird, muss *USB Debugging* auf dem Smartphone aktiviert werden, um die App direkt dort zu installieren (Bei Fragen siehe [hier](https://developer.android.com/studio/debug/dev-options)). Außerdem müssen auf dem Smartphone die *Google Play Services for AR* installiert sein. Diese sind im Google Play Store verfügbar.

Schließlich kann die App über *File -> Build and run* gebaut und auf dem verbundenen Smartphone installiert werden. Bei Problemen kann [diese Seite](https://docs.unity3d.com/Manual/android-sdksetup.html) eventuell weiterhelfen.

# HoloLens 2 
Die HoloLens 2 muss mit einem PC verbunden sein, damit die App deployed werden kann. Die Verbindung wurde per USB vorgenommen, allerdings gibt es weitere Möglichkeiten, die [hier](https://docs.microsoft.com/de-de/windows/mixed-reality/develop/platform-capabilities-and-apis/using-visual-studio?tabs=hl2) zu finden sind. Für die Konfiguration von Unity und den Deploy der App wurde allgemein dieses [Tutorial](https://docs.microsoft.com/de-de/windows/mixed-reality/develop/unity/tutorials/mr-learning-base-02) von Microsoft verwendet. Die einzelnen Schritte werden im Folgenden aufgezählt. 

## Software und Versionen
- Unityhub mit Unity Version: **2019.4.12f1**
- Microsoft Visual Studio Community 2019 Version: **16.8.3**
- Mixed Reality Toolkit Version: **2.4.0** [Download](https://github.com/Microsoft/MixedRealityToolkit-Unity/releases)
- Software dieser [Checkliste](https://docs.microsoft.com/de-de/windows/mixed-reality/develop/install-the-tools?tabs=unity) installieren 

## Unity konfigurieren
1. TextMeshProRessourcen installieren: Im Unitymenü *Windows > TextMeshPro > Import TMP Essential Ressources*. Im Popup **All** auswählen und dann **Import**.
2. Wechseln der Buildplatform: Im Unitymenü *File > Buildsettings* die **Universal Windows Platform** auswählen und **Switch Platform** drücken. 
3. Mixed Reality Toolkit: Entweder ausführbare Datei des [MixedRealityFeatureTool](https://www.microsoft.com/en-us/download/details.aspx?id=102778). Oder manuell Version 2.4.0 importieren (genutzter Weg). Im Unitymenü *Assets > Import Package > Custom Packge* und **Microsoft.MixedReality.Toolkit.Unity.Foundation.2.4.0.unitypackage** Datei auswählen. Zusätzlich können die Packages **Extension** und **Example** importiert werden. 
4. Konfigurieren des MRTKs: Im Unitymenü *Mixed Reality ToolKit > Utilities > Configure Project*, alle Optionen aktivieren und **Apply** betätigen.
5. Weitere Project/Player Settings: Im Unitymenü *Edit > Project Settings* anschließend in *Player > XR-Settings* unter dem Reiter Windows Platform. Dort **Virtual Reality Supported** auswählen, anschließend auf *+ Symbol* und **Windows Mixed Reality** hinzufügen.

## Projektbuild und Deploy
1. Unter *File > Build Settings* bei Universal Windows Platform **Build** drücken und einen Speicherort auswählen.
2. In dem neuen Ordner die *Projektname.sln* Datei in Visual Studio öffnen.
3. **Oder** Solution File *HoloLens 2 > HoloLens2Project > Builds* entnehmen und die *ObjectsAndPositions.sln* Datei in Visual Studio öffnen.
4. Unter *Solution Configurations* **Release** oder **Master**, die **ARM64**-Architektur und **Device** als Ziel auswählen.
5. HoloLens 2 muss erfolgreich mit dem PC verbunden und sollte nicht im Standby-Modus sein.
6. Unter *Debug > Start Without Debugging* auswählen.
7. Nach dem Build und Deploy wird die App auf der HoloLens 2 gestartet und befindet sich im Appmenü.

# Roboterarm Sawyer
Der Roboterarm muss mit dem PC erst verbunden sein, wenn *intera.sh* ausgeführt wird. Davor muss keine direkte Netzwerkverbindung bestehen.

## Software und Versionen
- ROS-Version: **Kinetic**
- Intera-SDK: **5.3.0**
- Sawyer-MoveIt: **5.3.0**
- Ubuntu-Version: **16.04 LTS**
- Python-Version: **2.7**
- Benötigte Packages: **Siehe imports des Skripts**

## Projektsetup
1. Innerhalb der *robot_main.py*-Datei müssen in Zeile 24 und 26 die IP-Adresse und der Port des Servers eingetragen werden.
2. Unter dem [Setup](https://sdk.rethinkrobotics.com/intera/Main_Page) Intera-SDK mit MoveIt installieren (Stand 16.05.2021). Die MoveIt Installationsschritte sind unter der *Tutorials*-Sektion der Seite zu finden. Das Setup ist für die ROS-Version *Kinetic* durchführen.
3. Ein exemplarisches *intera.sh* Skript wird im Repository zur Verfügung gestellt. Hier ist schon der Robot-Hostname eingetragen. Es kann aber auch das *intera.sh* Skript aus der Installation verwendet werden.
4. *studienarbeit* Ordner unter *Robot/ros_ws/src* in den eigenen *ros_ws/src* kopieren.
5. Workspace mit *catkin_make* innerhalb *ros_ws* bauen. Das package sollte nun Teil des Workspaces sein.
6. Der Workspace muss nur erneut gebaut werden, wenn Änderungen an ROS, der *CMakeList.txt* oder der *package.xml* vorgenommen wurden. Änderungen des Skriptes müssen aufgrund der Interpretersprache Python nicht neu gebaut werden.

## Ausführen des Projekts
1. Eine funktionierende Netzwerkverbindung mit Sawyer ist Voraussetzung für die nachfolgenden Schritte. (Richtige IP-Adresse des Laptops und richtiger Robot-Hostname innerhalb *intera.sh*)
2. Innerhalb des *ros_ws* *./intera.sh* ausführen.
3. Um MoveIt zu starten den Befehl *roslaunch sawyer_moveit_config sawyer_moveit.launch* ausführen.
	* Mit installiertem Gripper muss der Befehl zu *roslaunch sawyer_moveit_config sawyer_moveit.launch electric_gripper:=true* geändert werden.
4. Für den nächsten Schritt ist das laufende Serverskript Voraussetzung. (Sektion Server bis Schritt 4)
5. In einer neuen Konsole führe *./intera.sh* innerhalb des *ros_ws* ausführen.
6. Mit *rosrun studienarbeit robot_main.py* das Roboterskript starten.
7. Den Prompts in der Konsole folgen. 
 	* Die Positionen werden aufgezeichnet, nachdem der Stumpf des Arms an die richtige Stelle bewegt wurde. Der Arm kann, während Kreis auf der Manschette gedrückt wird, frei bewegt werden.
8. Im Menü können mit der Eingabe des Menüpunktes und *Enter* die verschiedenen Modi angesprochen werden.
9. Modus 1 wird auf ein Objekt von HoloLens oder dem Smartphone gewartet. 
 	* Bei Erhalt des Objekts bewegt sich der Arm an die Position.
 	* Nach der Bewegung zu dem Objekt kann mit *Enter* entweder ein weiteres gleichzeitig geschicktes Objekt angefahren werden, oder, wenn keine Objekte mehr zzur Verfügung stehen, zum Menü zurückgekehrt werden.
10. Modus 2 wird an alle anderen Geräte die Position und Rotation der Gelenke geschickt und wieder zum Menü zurückgekehrt.
11. Modus 0 wird das Programm beendet.

# Server
Der Server ist die Voraussetzung für die korrekte Funktion der App des Roboterarms. Zusätzlich muss der Server laufen, um den Datenaustausch zwischen den Geräten zu regeln.

## Versionen
- Python-Version: **2.7**
- Benötigte Packages: **Siehe imports des Skripts**

## Ausführen des Projekts
1. Innerhalb der *server.py*-Datei muss in Zeile 10 die IP-Adresse den ausführenden Computers im lokalen Netz eingetragen werden. Alternativ kann in Zeile 12 der Port angepasst werden. Diese IP-Adresse und Port nutzen später die Geräte, um sich mit dem Server zu verbinden.
2. Navigiere in einer Konsole innerhalb des Repositories zu dem *Server* Ordner.
3. Starte den Server mit *python server.py*.
4. Starte mit *Enter* das Setup.
5. Jetzt können sich alle Geräte verbinden.
6. Nach erfolgreicher Kalibrierung, starte mit *Enter* den produktiven Teil des Servers.

# Ressourcen
Dieser Ordner enthält das 3D-Modell für die Koordinatensysteme, die in den Gelenken dargestellt werden. Das Modell wurde bereits als Prefab in die Unity-Projekte importiert. Entworfen wurde das Modell mit Hilfe von Blender, weswegen die ursprüngliche Blender-Datei (*CS-Model.blend*) auch enthalten ist.
