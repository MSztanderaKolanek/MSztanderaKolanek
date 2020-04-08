template<typename T>

class List
  {
    public:

      struct element
      {
          T data;
          element *next;
          element()
          {
              next = 0;
          }
      };
      element *FirstElement;
      element *temporary;

      void pushBack(T input)
      {
          element *NewElement = new element;
          NewElement -> data = input;
          if(FirstElement == 0)
          {
              FirstElement = NewElement;
          }
          else
          {
              temporary = FirstElement;
              while(temporary -> next)
              {
                  temporary = temporary -> next;
              }
              temporary -> next = NewElement;
              NewElement -> next = 0;
          }
      }
      int size()
      {
          temporary = FirstElement;
          int size = 0;
          while(temporary)
          {
              size++;
              temporary = temporary -> next;
          }
          //std::cout<<std::endl;
          //std::cout<<"Size equals "<<size<<std::endl;
          return size;
      }
      void print()
      {
          temporary = FirstElement;
          while(temporary)
          {
              std::cout<<temporary -> data;
              temporary = temporary -> next;
          }
      }
      List()
      {
          FirstElement = 0;
      };
  };
