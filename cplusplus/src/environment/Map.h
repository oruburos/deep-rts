//
// Created by per on 04.02.18.
//

#ifndef DEEPRTS_MAP_H
#define DEEPRTS_MAP_H

#include <vector>
#include <iostream>
#include <map>
#include "../../../include/rapidjson/include/rapidjson/document.h"

struct TileData {
    int depleteTile;
    std::string name;
    bool walkable;
    bool harvestable;
    bool swimable;
    int resources;
    int lumber_yield;
    int gold_yield;
    int oil_yield;

    TileData(){}

    TileData(
            int depleteTile,
            std::string name,
            bool walkable,
            bool harvestable,
            bool swimable,
            int resources,
            int lumber_yield,
            int gold_yield,
            int oil_yield): depleteTile(depleteTile), name(name), walkable(walkable), harvestable(harvestable),
                            swimable(swimable), resources(resources), lumber_yield(lumber_yield), gold_yield(gold_yield),
                            oil_yield(oil_yield){

    }
};




class Map {

public:

    Map(const std::string& map_file);

    /// A tile's Width
    int TILE_WIDTH;

    /// A tile's Height
    int TILE_HEIGHT;

    /// The Map Width (Num of tiles in width)
    size_t MAP_WIDTH;

    /// The Map Height (Num of tiles in height)
    size_t MAP_HEIGHT;

    std::vector<int> tileIDs;

    std::map<int, TileData> tilesData;




};


#endif //DEEPRTS_MAP_H
