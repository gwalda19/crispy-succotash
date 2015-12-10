//
//  MissionTypesEnum.h
//  Group2_Final_Project2
//
//  Created by Group 2
//  08DEC15
//

#ifndef uavMissionModes_h
#define uavMissionModes_h

namespace uavMissionModes
{
    enum uavMissionTypesEnum
    {
        NO_MISSION = -1,
        RECON_MISSION,
        COMBAT_MISSION,
        SUPPLY_MISSION
    };

    enum uavStateEnum
    {
        NO_STATE = -1,
        AUTO,
        USER
    };
};

#endif
