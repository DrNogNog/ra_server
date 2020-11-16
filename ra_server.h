using namespace std;
#include <string>
/*
 This is a basic assignment to design a road anaylsis server in C++
 Some object definitions are included
 Feel free to import any libraries you wish

 In a basic model, this algorithm is run every minute with information,
  collected from Blinkah Head Units at the same time.

 The idea is that there are multiple 'HeadUnit' objects
 Each head unit Object owns multiple 'VehicleAnalysis' objects.

 There is also a Master vector of 'VehicleAnalysis' Objects,
  that compiles the information from other vehicles
 
 Each 'VehicleAnalysis' contains a map of possible erratic actions a car is undertaking,
 with a given action_id, and a float representing the likeliehood of it happening.
 An action_id represents a specific action such as changing lanes without a turn signal.

 For this assignment, code any necessary class functions and helper functions
 in order to run the algorithm.

 For the first iteration of this algorithm, 
 simply include all vehicles viewed by any Head Unit in the Master vector,
 with averaged values from all Head Units that viewed it,
 as well as determine a car's actual velocity and position 
 and return them in 'relative_velocity' and 'relative_position'

*/

class VehicleAnalysis {
  private:
    string license;
    pair<float, float> relative_velocity;
    pair<float, float> relative_position;
    map<int, float> erratic_actions;
  public:
    VehicleAnalysis(string license, pair<float, float> relative_velocity, pair<float, float> relative_position, map<int, float> erratic_actions);
    string get_license();
    pair<float, float> get_relative_velocity();
    pair<float, float> get_relative_position();
    map<int, float> get_erratic_actions();
}

class HeadUnit {
  private:
    int unit_id;
    pair<float, float> velocity;
    pair<float, float> position;
    vector<VehicleAnalysis> log;
  public:
    HeadUnit(int unit_id, pair<float, float> velocity, pair<float, float> position, vector<VehicleAnalysis> log);
    int get_vehicle_id();
    pair<float, float> get_velocity();
    pair<float, float> get_position();
    vector<VehicleAnalysis> get_log();
} 

VehicleAnalysis(string license, pair<float, float> relative_velocity, pair<float, float> relative_position, map<int, float> erratic_actions) {
  // Constructor: Intializes Object with objcts at initial value
  license = '';
  relative_velocity = <0.0,0.0>;
  relative_position = <0.0,0.0>;
  erratic_actions = <0, 0.0>;
}

string get_license() { 
  // Accessor Method for license
  return VehicleAnalysis.license; 
}

pair<float, float> get_relative_velocity() { 
  // Accessor Method for relative_velocity
  return VehicleAnalysis.relative_velocity;
}

pair<float, float> get_relative_position() { 
  // Accessor Method for relative_position
  return VehicleAnalysis.relative_position;
}

map<int, float> get_erratic_actions() { 
  // Accessor Method for erratic actions 
  return VehicleAnalysis.erratic_actions;
}

HeadUnit(int unit_id, pair<float, float> velocity, pair<float, float> position, vector<VehicleAnalysis> log) {
  // Constructor Method for HeadUnit: Initializes the intial values of HeadUnit.
  unit_id = 0;
  velocity = <0.0,0.0>;
  position = <0.0,0.0>;
  log = <'', <0.0,0.0>,<0.0,0.0>,0>;
}

int get_vehicle_id() {
  // Accessor Method for Head Unit vehicle_id
  return HeadUnit.vehicle_id;
}

pair<float, float> get_velocity() {
  // Accessor Method for Head Unit velocity
  return HeadUnit.get_velocity;
}

pair<float, float> get_position() {
  // Accessor Method for Head Unit for position
  return HeadUnit.position;
}

vector<VehicleAnalysis> get_log() {
  // Accessor Method for Head Unit log
  return HeadUnit.log
}

HeadUnit getMasterUnit (vector<HeadUnit> inputs) {

  // FILL IN THIS FUNCTION!
  

  HeadUnit(null, null, null, null) master;
  return master;
}
