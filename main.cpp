#include <iostream>

using namespace std;

int main()
{
    cout << "" << endl;
    cout << "Picastro - an open source GNU planning software for astrophotography" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "Picastro will ask you a series of questions to calculate anything he can about what you can picture, how , etc..." << endl;
    cout << "" << endl;
    double angle_obj;;
    cout << "How large is the object you want to photography ? (in arch degrees °) " ;
    cin >> angle_obj;
    double focal;
    cout << "Focal length of your 'objective' (mm) " ;
    cin >> focal;
    double sampling = 206*(8/focal);
    string sensor;
    cout << "What type of sensor is it ? ('1' for APS-C, '2' for 24x36 (full frame), '3' for other) " ;
    cin >> sensor;
    if(sensor == "1"){
        // for APS-C
        double exposuretime = 200/focal;
        double chp = 57.3*(23/focal);
        double focal_for_ang = 57.3*(23/(angle_obj+0.5));
        cout << "" << endl;
        cout << "For the object you want to picture, I would suggest a focal of " << focal_for_ang << " mm." << endl;
        cout << "Your sensor will 'see' an angle of " << chp << " °." << endl;
        cout << "I would suggest " << exposuretime << "s of exposure time." << endl;
        cout << "Your sampling is " << sampling << "''." << endl;
    }
    if(sensor == "2"){
        // for 24 x 36
        double exposuretime = 300/focal;
        double chp = 57.3*(36/focal);
        double focal_for_ang = 57.3*(36/(angle_obj+0.5));
        // results
        cout << "" << endl;
        cout << "For the object you want to picture, I would suggest a focal of " << focal_for_ang << " mm." << endl;
        cout << "Your sensor will 'see' an angle of " << chp << " °." << endl;
        cout << "I would suggest " << exposuretime << "s of exposure time." << endl;
        cout << "Your sampling is " << sampling << "''." << endl;
    }
    if(sensor == "3"){
        // for other
        double width;
        cout << "Width of your sensor (mm): " ;
        cin >> width;
        double chp = 57.3*(width/focal);
        double focal_for_ang = 57.3*(width/(angle_obj+0.5));
        // results
        cout << "" << endl;
        cout << "For the object you want to picture, I would suggest a focal of " << focal_for_ang << " mm." << endl;
        cout << "Your sensor will 'see' an angle of " << chp << " °." << endl;
        cout << "Your sampling is " << sampling << "''." << endl;
    }
    string out;
    cin >> out;
    return 0;
}


