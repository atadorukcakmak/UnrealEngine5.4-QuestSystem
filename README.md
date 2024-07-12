# Unreal Engine 5.4 Quest System

This repository contains a quest system for Unreal Engine 5.4, implemented using interfaces, structures, data tables, etc. The system includes simple UIs and animated notifications to enhance the user experience.

## **Features**

**Quest Structure**: Quests are divided into stages, and each stage is further divided into objectives. These are editable according to your desire.

**Quest Types**: There are four types of quests: Kill, Location, Collect, and Interact.
- **Kill**: Kill a specified number of targets.
- **Location**: Reach a designated point on the map.
- **Interact**: Interact with a specified object by pressing the "E" key.
- **Collect**: Collect specified objects scattered on the map.

**Quest Tracking**: You can track your ongoing quest objectives by clicking "Track" in the Quest UI. The system will monitor your progress based on the quantity specified in the data table.

**Easy Setup**: Setting up new quests is straightforward. Simply create new data rows in the data table and provide the necessary information.

**Rewards**: Each stage can have XP, item, and currency rewards.

**NPC Interaction**: NPCs can give quests to players. Upon completing a quest, you can return to the NPC to either accept or reject the rewards.

**Side Quests**: You can add side quests, which will be displayed in the UI and data table.

**Mechanics**: Essential mechanics for quests (interaction, killing, location checking, collecting) are already implemented.

**NPC Restrictions**: While on a quest, you cannot talk to the quest-giving NPC again. The console will log "Already On Quest" if attempted. You can add a UI element for this if desired.

