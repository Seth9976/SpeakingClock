// 函数: sub_404f1c
// 地址: 0x404f1c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_10 = arg2
int32_t i_2 = arg2
int32_t* edi = nullptr
int32_t* ecx = (&__return_addr)[arg2]
char* eax

if (ecx == 0 || *arg1 != ecx)
    eax = nullptr
else
    edi = ecx
    eax = ecx[-1]
    arg2 -= 1

int32_t i

do
    void* ecx_1 = (&__return_addr)[arg2]
    
    if (ecx_1 != 0)
        char* temp1_1 = eax
        eax = &eax[*(ecx_1 - 4)]
        
        if (add_overflow(temp1_1, *(ecx_1 - 4)))
            eax.b = 5
            noreturn sub_402ff8(eax) __tailcall
        
        if (edi == ecx_1)
            edi = nullptr
    
    i = arg2
    arg2 -= 1
while (i != 1)
void* var_18
void* esi_1

if (edi == 0)
    void* eax_2 = sub_404c4c(eax)
    var_18 = eax_2
    esi_1 = eax_2
else
    int32_t esi = edi[-1]
    sub_4052a8(arg1, eax)
    edi = arg1
    var_18 = *edi
    esi_1 = esi + *edi
    i_2 -= 1

int32_t i_1

do
    int64_t* eax_3 = (&__return_addr)[i_2]
    void* edx_1 = esi_1
    
    if (eax_3 != 0)
        void* ecx_2 = *(eax_3 - 4)
        esi_1 += ecx_2
        sub_4030d0(eax_3, edx_1, ecx_2, var_18, arg1, var_10)
    
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
int64_t* edx_2 = var_18

if (edi == 0)
    if (edx_2 != 0)
        edx_2[-1].d -= 1
    
    sub_404bdc(arg1, edx_2)

jump(__return_addr)
