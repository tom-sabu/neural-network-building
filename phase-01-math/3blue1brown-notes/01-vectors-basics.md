# Video 1: Vectors - What Even Are They?

**📅 Date**: [29-09-2025]  
**⏱️ Duration**: 9:52  
**🔗 Link**: https://youtu.be/fNk_zzaMoSs  
**📊 Status**: ⏳ Not Started

---

## 🎯 Before Watching - What I Think I Know
*Write what you think vectors are before watching:*
- Thinking about vector the first thing coming to my mind is "arrow", which is drawn in a x and y axis grid, I don't know how they will be useful or how to use it on real life. What i heard is that this is a very important terminology for neural network. I think i learned about vectors when I was studying in my +1 +2 years. I didn't give much attention to it at those times, but I think I know how it works mathematically its just i don't know how to compare it to real life.
  I think vectors can be added and multiplied, Also i remember i learned several rules for addition and multiplication of vectors, I didn't exactly know what all rules are but i have an idea, if i read all those one more time i think i will understand it all.
  The other thing i know is that this arrow can be represented using matrix, The coordinate of the point at which the tip of the arrow is written as a matrix.
  That's all (actually that's not all its just that i don't know how to gather all the data i have in my mind).

## 📝 Key Concepts 

### 1. Three Perspectives on Vectors
- **Physics Student Perspective**: 
  - Vectors are: Arrows in space, they are defined by its length and the direction at which it is pointing. There are 2 dimensional and 3 dimensional vectors. And he also said the vector will be same anywhere in the space as long as it have same length and have same direction. 
  - They have: length and direction, the factors which defines a vector.
  - Example: He didn't mention any examples, but i think acceleration can be represented in vectors, direction of the vector define the direction of the object and the length of the vector is the magnitude of the speed. That's what i am thinking, i don't know if it right or wrong.

- **Computer Science Perspective**: 
  - Vectors are: They are ordered list of numbers. 
  - They're useful for: storing data in an ordered manner and represent it using arrow in a graph, I think.
  - Example: Storing roll number, age, weight and height and represent it using vector

- **Math Student Perspective**: 
  - Vectors are: actually i don't understand that perspective, He said for math students vector can be anything. 
  - The key insight: I didn't get any insights from this. 

### 2. Vector Operations
- **Addition**: 
  - Geometric method (tip-to-tail): In a 2D plane the addition of two vectors can be done by placing tail of one of the vector of the two at the tip of the other vector, same goes to 3D, its just that the 3rd vectors tail will be placed the at the tip of the 2nd vector which is placed just like in 2D plane. The important thing is that the direction and the length of the vector will be preserved. 
  - Numeric method: Numerically it is written by finding how much it took x-distance and y-distance to reach the tip of that vector. Where the origin of the vector (tail) is begin from the origin.
  - Example: [3, 1] + [2, -1] = [5, 0]

- **Scalar Multiplication**: 
  - What happens when you multiply by 2: When a vector multiplied by 2 the length of the vector will stretch 2x, direction will be the same. 
  - What happens when you multiply by -1: When a vector is multiplied by -1, the direction of the vector will change to opposite side, but will have the same length.
  - What happens when you multiply by 0.5: When a vector is multiplied by 0.5, the length of the vector will get shrink to half its size. 

### 3. Coordinate System Foundation
- **î (i-hat)**: Unit vector pointing to x-axis
- **ĵ (j-hat)**: Unit vector pointing  to y-axis
- **Any vector [x, y]**: Can be written as _x_ × î + _y_ × ĵ

## 🎨 Visual Notes
*Sketch or describe the key visualizations:*
- Vector as arrow: I there are different perspective for seeing vectors, one for physicists, one for computer scientists, one for mathematicians. As for me who is trying to create a neural network i think i will choose the perspective of a computer scientists, Which is, all the vectors in a space originate from the origin of that space, they are free to stretch, squish or direct however they want.  
- Vector addition diagram:![[d8a90ff9-5d56-47f7-bb9c-ea2fdd0a8c81.png]]
  
- Scaling visualization:![[755868b1-dcf0-4230-a640-fc7f9276c4c9.png]]

## 💻 Code Implementation Plan
Based on this video, I need to implement:
```cpp
class Vector2D {
private:
    // What data do I need to store?
    
public:
    // What operations did I learn?
    Vector2D(double x, double y);  // Constructor
    Vector2D add(const Vector2D& other);  // Addition
    Vector2D scale(double scalar);        // Scalar multiplication  
    void print();                        // Display vector
};