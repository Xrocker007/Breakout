# Breakout

W Kavanagh & N Merchant. Summer 2024 (last maintained, Oct 26)

## Controls

A/D to move the paddle right and left.
P to pause.

## Powerups

big/small paddle (blue)
fast/slow ball (fancy yellow)
fire ball (green)

# Tasklist

You are to spend between three and eight hours improving this simple Breakout implementation in a way to best demonstrate your capabilities as a games programmer. 

## Suggested tasks

* Implement mouse input for pad
* Improved VFX (ball trail, paddle hit response, brick particle destruction)
* Better UI (progress bar rather than timer for countdown).
* Add an actual game loop
* Better ball physics (Box2D)
* Leaderboards
* More ball types (e.g., multiball, sticky ball, brick-tracking ball)
    * Note: smallPaddle is too simple to be impressive.
* Sounds with increasing tone between bounces.
* Implement commentary with calls to an LLM such as Ollama

# Time Details and Changelist

Removed chance of Smallpaddle and FastBall from happening as they are both downgrades. (2m)
Made the ball respawn above the player. (15m)
Added Bullets that spawn from bricks that stun the player. (1.5h)
Added Moving bricks (2h)

---

### Change log
* 2025 - Naman made it harder
* 2026 - William made it easier again
* 2026 - James see Time Details and Changelist
---

Curse you, fast ball!