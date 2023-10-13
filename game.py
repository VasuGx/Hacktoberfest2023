import pygame
import sys

# Initialize Pygame
pygame.init()

# Constants
WIDTH, HEIGHT = 800, 600
BALL_SPEED = [7, 7]
PADDLE_SPEED = 10

# Colors
WHITE = (255, 255, 255)

# Create the game window
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Ping Pong Game")

# Initialize ball and paddles
ball = pygame.Rect(WIDTH // 2 - 15, HEIGHT // 2 - 15, 30, 30)
player = pygame.Rect(50, HEIGHT // 2 - 60, 10, 120)
opponent = pygame.Rect(WIDTH - 60, HEIGHT // 2 - 60, 10, 120)

# Ball initial direction
ball_dx = BALL_SPEED[0]
ball_dy = BALL_SPEED[1]

# Scores
player_score = 0
opponent_score = 0

# Fonts
font = pygame.font.Font(None, 36)

# Main game loop
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    keys = pygame.key.get_pressed()
    if keys[pygame.K_UP] and player.top > 0:
        player.y -= PADDLE_SPEED
    if keys[pygame.K_DOWN] and player.bottom < HEIGHT:
        player.y += PADDLE_SPEED

    # Ball movement
    ball.x += ball_dx
    ball.y += ball_dy

    # Ball collisions
    if ball.top <= 0 or ball.bottom >= HEIGHT:
        ball_dy *= -1

    # Ball and paddle collisions
    if ball.colliderect(player) or ball.colliderect(opponent):
        ball_dx *= -1

    # Scoring
    if ball.left <= 0:
        opponent_score += 1
        ball = pygame.Rect(WIDTH // 2 - 15, HEIGHT // 2 - 15, 30, 30)
        ball_dx *= -1
    elif ball.right >= WIDTH:
        player_score += 1
        ball = pygame.Rect(WIDTH // 2 - 15, HEIGHT // 2 - 15, 30, 30)
        ball_dx *= -1

    # Draw everything
    screen.fill((0, 0, 0))
    pygame.draw.rect(screen, WHITE, player)
    pygame.draw.rect(screen, WHITE, opponent)
    pygame.draw.ellipse(screen, WHITE, ball)
    pygame.draw.aaline(screen, WHITE, (WIDTH // 2, 0), (WIDTH // 2, HEIGHT))

    # Display scores
    player_text = font.render(str(player_score), True, WHITE)
    opponent_text = font.render(str(opponent_score), True, WHITE)
    screen.blit(player_text, (WIDTH // 4, 50))
    screen.blit(opponent_text, (3 * WIDTH // 4 - 30, 50))

    # Update the display
    pygame.display.flip()

    # Cap the frame rate
    pygame.time.delay(30)
