#include "gtest/gtest.h"
#include "../header/CharacterStats.h"

/*
    Character/CharacterData Class
*/
TEST(CharacterStatsTests, testCharacterStatsConstructorValidInputs){
    CharacterStats *stats = new CharacterStats(5, 5, 5, 5);
    ASSERT_TRUE(stats->Vitality() == 5);
    ASSERT_TRUE(stats->Strength() == 5);
    ASSERT_TRUE(stats->Agility() == 5);
    ////ASSERT_TRUE(stats->Compatibility() == 5);
    ASSERT_TRUE(stats->Luck() == 5);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsConstructorInvalidInputs){
    CharacterStats *stats = new CharacterStats(-5, -5, -5, -5);
    ASSERT_TRUE(stats->Vitality() == 0);
    ASSERT_TRUE(stats->Strength() == 0);
    ASSERT_TRUE(stats->Agility() == 0);
    //ASSERT_TRUE(stats->Compatibility() == 0);
    ASSERT_TRUE(stats->Luck() == 0);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsConstructorValidInputsWithStruct){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    ASSERT_TRUE(stats->Vitality() == 5);
    ASSERT_TRUE(stats->Strength() == 5);
    ASSERT_TRUE(stats->Agility() == 5);
    //ASSERT_TRUE(stats->Compatibility() == 5);
    ASSERT_TRUE(stats->Luck() == 5);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsConstructorInvalidInputsWithStruct){
    characterStats tempStats = { -5, -5, -5, -5};
    CharacterStats *stats = new CharacterStats(tempStats);
    ASSERT_TRUE(stats->Vitality() == 0);
    ASSERT_TRUE(stats->Strength() == 0);
    ASSERT_TRUE(stats->Agility() == 0);
    //ASSERT_TRUE(stats->Compatibility() == 0);
    ASSERT_TRUE(stats->Luck() == 0);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsSetVitalityWithValidInputPositive){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->SetVitality(1);
    EXPECT_TRUE(stats->Vitality() == 1);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsSetVitalityWithInvalidInputNegative){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->SetVitality(-1);
    EXPECT_TRUE(stats->Vitality() == 0);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsAddVitalityWithPositiveInput){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->AddVitality(1);
    EXPECT_TRUE(stats->Vitality() == 6);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsAddVitalityWithNegativeInput){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->AddVitality(-1);
    EXPECT_TRUE(stats->Vitality() == 4);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsAddVitalityWithInvalidInput){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->AddVitality(-999);
    EXPECT_TRUE(stats->Vitality() == 0);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsSetStrengthWithValidInputPositive){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->SetStrength(1);
    EXPECT_TRUE(stats->Strength() == 1);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsSetStrengthWithInvalidInputNegative){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->SetStrength(-1);
    EXPECT_TRUE(stats->Strength() == 0);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsAddStrengthWithPositiveInput){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->AddStrength(1);
    EXPECT_TRUE(stats->Strength() == 6);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsAddStrengthWithNegativeInput){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->AddStrength(-1);
    EXPECT_TRUE(stats->Strength() == 4);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsAddStrengthWithInvalidInput){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->AddStrength(-999);
    EXPECT_TRUE(stats->Strength() == 0);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsSetAgilityWithValidInputPositive){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->SetAgility(1);
    EXPECT_TRUE(stats->Agility() == 1);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsSetAgilityWithInvalidInputNegative){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->SetAgility(-1);
    EXPECT_TRUE(stats->Agility() == 0);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsAddAgilityWithPositiveInput){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->AddAgility(1);
    EXPECT_TRUE(stats->Agility() == 6);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsAddAgilityWithNegativeInput){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->AddAgility(-1);
    EXPECT_TRUE(stats->Agility() == 4);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsAddAgilityWithInvalidInput){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->AddAgility(-999);
    EXPECT_TRUE(stats->Agility() == 0);
    delete stats;
}

// TEST(CharacterStatsTests, testCharacterStatsSetCompatibilityWithValidInputPositive){
//     characterStats tempStats = { 5, 5, 5, 5, 5};
//     CharacterStats *stats = new CharacterStats(tempStats);
//     stats->SetCompatibility(1);
//     EXPECT_TRUE(stats->Compatibility() == 1);
//     delete stats;
// }

// TEST(CharacterStatsTests, testCharacterStatsSetCompatibilityWithInvalidInputNegative){
//     characterStats tempStats = { 5, 5, 5, 5, 5};
//     CharacterStats *stats = new CharacterStats(tempStats);
//     stats->SetCompatibility(-1);
//     EXPECT_TRUE(stats->Compatibility() == 0);
//     delete stats;
// }

// TEST(CharacterStatsTests, testCharacterStatsAddCompatibilityWithPositiveInput){
//     characterStats tempStats = { 5, 5, 5, 5, 5};
//     CharacterStats *stats = new CharacterStats(tempStats);
//     stats->AddCompatibility(1);
//     EXPECT_TRUE(stats->Compatibility() == 6);
//     delete stats;
// }

// TEST(CharacterStatsTests, testCharacterStatsAddCompatibilityWithNegativeInput){
//     characterStats tempStats = { 5, 5, 5, 5, 5};
//     CharacterStats *stats = new CharacterStats(tempStats);
//     stats->AddCompatibility(-1);
//     EXPECT_TRUE(stats->Compatibility() == 4);
//     delete stats;
// }

// TEST(CharacterStatsTests, testCharacterStatsAddCompatibilityWithInvalidInput){
//     characterStats tempStats = { 5, 5, 5, 5, 5};
//     CharacterStats *stats = new CharacterStats(tempStats);
//     stats->AddCompatibility(-999);
//     EXPECT_TRUE(stats->Compatibility() == 0);
//     delete stats;
// }

TEST(CharacterStatsTests, testCharacterStatsSetLuckWithValidInputPositive){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->SetLuck(1);
    EXPECT_TRUE(stats->Luck() == 1);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsSetLuckWithInvalidInputNegative){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->SetLuck(-1);
    EXPECT_TRUE(stats->Luck() == 0);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsAddLuckWithPositiveInput){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->AddLuck(1);
    EXPECT_TRUE(stats->Luck() == 6);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsAddLuckWithNegativeInput){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->AddLuck(-1);
    EXPECT_TRUE(stats->Luck() == 4);
    delete stats;
}

TEST(CharacterStatsTests, testCharacterStatsAddLuckWithInvalidInput){
    characterStats tempStats = { 5, 5, 5, 5};
    CharacterStats *stats = new CharacterStats(tempStats);
    stats->AddLuck(-999);
    EXPECT_TRUE(stats->Luck() == 0);
    delete stats;
}

// int main(int argc, char **argv) {
//   ::testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }