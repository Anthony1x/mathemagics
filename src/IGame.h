
class IGame
{
  public:
    virtual void Update() = 0;
    virtual void Draw() = 0;

    virtual IGame& operator=(const IGame&) = 0;
    virtual ~IGame() = 0;
};
