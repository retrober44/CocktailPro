#include <limits.h>
#include "gtest/gtest.h"

#define protected public
#define private public
#include "RecipeBook.h"
#undef protected
#undef private

class RecipeBookTest : public ::testing::Test {
 protected:
  RecipeBook* r;

  virtual void SetUp() {
          r = new RecipeBook();
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test
    // (right before the destructor).
    delete r;
  }
};

TEST_F(RecipeBookTest,getNumberOfRecipesReturnsValueOfAttribute){
    int noOfRecipes=r->m_Recipe.size();
    EXPECT_EQ(noOfRecipes,r->getNumberOfRecipes());
}
