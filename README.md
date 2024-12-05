🚀 Day 12 of GFG 160 - 160 Days of Problem-Solving Challenge 💻💡
📅 Date: 5th December 2024
🔍 Problem: Max Circular Subarray Sum
🌟 Level: Medium

#Problem Description:
The goal is to find the maximum sum of a circular subarray in a given array.
A subarray is "circular" if the array is treated as a circular buffer.

#Approach:
To solve this, the problem is broken into two cases:
Non-circular maximum subarray sum: Using Kadane's Algorithm.
Circular maximum subarray sum: Subtracting the minimum subarray sum (using Kadane's approach on inverted elements) from the total array sum.
