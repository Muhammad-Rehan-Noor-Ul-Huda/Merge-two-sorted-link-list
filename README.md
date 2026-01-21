# Merge-two-sorted-link-list
# 🧩 Merge Two Sorted Lists (Custom Pointer-Based Solution)

### 👨‍💻 Author
**Muhammad Rehan**  
_BS IT Student | AI & ML Enthusiast_  
📅 **Completed:** January 2026  
⏱️ **Time Spent:** Around 2–3 days (on and off, while working on other tasks)

---

## 🧠 Problem Statement

Given two **sorted singly linked lists**, merge them into a single sorted linked list **in-place** (without creating new nodes).  
Return the head of the merged linked list.

**Example:**
list1 = [-9, 3]
list2 = [5, 7]

Output: [-9, 3, 5, 7]


---

## ⚙️ My Approach

Instead of using a **dummy node** (the common shortcut), I designed a custom **manual pointer manipulation algorithm**.

The logic:
1. Determine which list starts with the smaller value — that becomes the base (`temp1`).
2. Use another pointer (`temp2`) for the second list.
3. Traverse both lists:
   - If the current `temp2` node fits before `temp1->next`, insert it directly.
   - Otherwise, move forward in `temp1`.
4. When `temp1` reaches the end, attach all remaining nodes from `temp2`.

---

## 🧩 Code Explanation

- Handles **edge cases** (if any list is `nullptr`).
- Works **in-place** — no extra memory or new list.
- Uses only **pointer adjustments**.
- Fully iterative, no recursion.

---

## 🧮 Complexity Analysis

| Type | Complexity |
|------|-------------|
| **Time Complexity** | O(m + n) — every node visited once |
| **Space Complexity** | O(1) — only uses a few pointers |

---

## 🧾 Key Learnings

- Practiced **deep understanding of linked list internals**.  
- Learned how to handle pointers safely without a dummy node.  
- Strengthened debugging and edge case handling skills.  
- Reinforced the idea of balancing **logic clarity vs. code brevity**.

---

## 💬 Author’s Note

I took about **2–3 days** to fully understand, debug, and polish this version while also managing other tasks.  
This is my **personal low-level implementation**, done to solidify my pointer logic rather than relying on standard shortcuts.

This project represents:
> “Not just solving problems — but understanding *how things truly work* underneath.”

---

## 🧱 Example Dry Run

**Input:**
list1: -9 → 3 → NULL
list2: 5 → 7 → NULL


**Process:**
- `-9 < 5` → base list = list1  
- Compare 3 and 5 → attach remaining [5,7] at the end  

**Output:**
-9 → 3 → 5 → 7 → NULL


---




---

## 📢 License & Ownership

This solution is **originally written and owned by Muhammad Rehan**.  
Feel free to reference or learn from it — but please **credit the author** if reused.

---

⭐ _“Learning by building, not by memorizing.”_
