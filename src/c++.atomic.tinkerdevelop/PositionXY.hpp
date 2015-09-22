 #ifndef PositionXY_hpp_
 #define PositionXY_hpp_
 
 class PositionXY{
	 
	 private:
	 
		double x;
		double y;
	 
	 public:
	 
		PositionXY();
		PositionXY(double x, double y);
		~PositionXY();
		void setX(double x);
		void setY(double y);
		double getX(void);
		double getY(void);
		
	 
	 };
 
 #endif
