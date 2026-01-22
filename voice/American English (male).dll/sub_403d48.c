// 函数: sub_403d48
// 地址: 0x403d48
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

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
    int32_t ecx_1 = (&__return_addr)[arg2]
    
    if (ecx_1 != 0)
        eax = &eax[*(ecx_1 - 4)]
        
        if (edi == ecx_1)
            edi = nullptr
    
    i = arg2
    arg2 -= 1
while (i != 1)
void* var_18
void* esi_1

if (edi == 0)
    void* eax_2 = sub_403ab0(eax)
    var_18 = eax_2
    esi_1 = eax_2
else
    int32_t esi = edi[-1]
    sub_403f68(arg1, eax)
    edi = arg1
    var_18 = *edi
    esi_1 = esi + *edi
    i_2 -= 1

int32_t i_1

do
    void* eax_3 = (&__return_addr)[i_2]
    void* edx_1 = esi_1
    
    if (eax_3 != 0)
        int32_t ecx_2 = *(eax_3 - 4)
        esi_1 += ecx_2
        sub_4027b0(eax_3, edx_1, ecx_2)
    
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)

if (edi == 0)
    if (var_18 != 0)
        *(var_18 - 8) -= 1
    
    sub_403a40(arg1, var_18)

jump(__return_addr)
