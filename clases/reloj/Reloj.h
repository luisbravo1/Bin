class Reloj {
public:
   Reloj(); //Constructor default
   void setTime(int, int, int);
   void getTime(int&, int&, int&) const;
   void printTime() const;
   void incrementSeconds();
   void incrementMinutes();
   void incrementHours();
   bool equalTime(const Reloj&) const;
private:
   int hr;
   int min;
   int sec;
};
