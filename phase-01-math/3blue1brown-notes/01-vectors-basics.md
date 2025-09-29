# Video 1: Vectors - What Even Are They?

**📅 Date**: [DATE YOU WATCH]  
**⏱️ Duration**: 9:52  
**🔗 Link**: https://youtu.be/fNk_zzaMoSs  
**📊 Status**: ⏳ Not Started

---

## 🎯 Before Watching - What I Think I Know
*Write what you think vectors are before watching:*
- 

## 📝 Key Concepts (Fill out while watching)

### 1. Three Perspectives on Vectors
- **Physics Student Perspective**: 
  - Vectors are:
  - They have:
  - Example:

- **Computer Science Perspective**: 
  - Vectors are:
  - They're useful for:
  - Example:

- **Math Student Perspective**: 
  - Vectors are:
  - The key insight:

### 2. Vector Operations
- **Addition**: 
  - Geometric method (tip-to-tail):
  - Numeric method:
  - Example: [3, 1] + [2, -1] = 

- **Scalar Multiplication**: 
  - What happens when you multiply by 2:
  - What happens when you multiply by -1:
  - What happens when you multiply by 0.5:

### 3. Coordinate System Foundation
- **î (i-hat)**: Unit vector pointing
- **ĵ (j-hat)**: Unit vector pointing  
- **Any vector [x, y]**: Can be written as __ × î + __ × ĵ

## 🎨 Visual Notes
*Sketch or describe the key visualizations:*
- Vector as arrow:
- Vector addition diagram:
- Scaling visualization:

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