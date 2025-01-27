#define CMDLENGTH 45
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
  BLOCK("sb-forecast", 5, 5),
  BLOCK("sb-pacpackages", 3600, 8),
  BLOCK("sb-cpu", 1, 18),
  BLOCK("sb-gpu", 1, 3),
  BLOCK("sb-memory", 5, 14),
  BLOCK("sb-nettraf", 1, 16),
  BLOCK("sb-disk", 5, 13),
  BLOCK("sb-volume", 0, 21),
  BLOCK("sb-clock", 1, 1),
  BLOCK("sb-app", 1, 9)
};
