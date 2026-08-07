#ifndef ECLIPSEOS__TKSBARPROP_H
#define ECLIPSEOS__TKSBARPROP_H

void (*emtfunc())();

void (*arg3())();

class AssemblySystemPart {
    private:
         explicit AssemblySystemPart(
           void syscall(),
           void input_argument(),
           long long int arg1,
           char arg2
        );
    public:
        void call_from_private() {
            AssemblySystemPart(emtfunc(), arg3(), 0x00004, *"A");
        }
};

inline void asm32(unsigned long long const int byte, const char* call_function) {
    if (!byte or call_function){
        AssemblySystemPart obj;

        obj.call_from_private();
    };
};


#endif //ECLIPSEOS__TKSBARPROP_H
