#include <vector>
#include <unordered_set>

class Solution {
public:
    // Stores the list of rooms and keys within them
    std::vector<std::vector<int>> roomKeys;

    // Keeps track of visited rooms
    std::unordered_set<int> visitedRooms;

    // Returns true if all rooms can be visited using the keys in them
    bool canVisitAllRooms(std::vector<std::vector<int>>& rooms) {
        // Clear the visitedRooms set in case it's being reused
        visitedRooms.clear();

        // Initialize roomKeys with the input rooms and their keys
        roomKeys = rooms;

        // Start the DFS from room 0
        dfs(0);
      
        // If the size of visitedRooms is equal to the total number of rooms,
        // it means we could visit all rooms
        return visitedRooms.size() == rooms.size();
    }

    // Recursive Depth First Search function to visit rooms
    void dfs(int currentRoom) {
        // If we've already visited the current room, return to avoid cycles
        if (visitedRooms.count(currentRoom)) return;
      
        // Mark the current room as visited
        visitedRooms.insert(currentRoom);
      
        // Loop over every key in the current room
        for (int key : roomKeys[currentRoom]) {
            // Use the key to visit the next room
            dfs(key);
        }
    }
};