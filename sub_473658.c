// 函数: sub_473658
// 地址: 0x473658
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* var_8 = arg2
uint32_t ebx = arg1
char var_9 = 0

if (*(ebx + 0x30a) != 0)
    *(ebx + 0x30c)
    arg1, arg2 = (*(ebx + 0x308))()

int32_t* edi_1 = *(ebx + 0x290)

if (edi_1 != 0 && edi_1[0xe] != 0)
    int32_t esi
    esi.w = 0xffee
    arg1, arg2 = sub_403e64(edi_1, esi, var_8)

if (edi_1 != 0 && edi_1[0xe] != 0 && arg1.b != 0)
    arg1.b = 1
else
    int32_t __saved_ebp
    int32_t* var_1c_1 = &__saved_ebp
    
    if (sub_4735dc(ebx, arg2).b != 0)
        arg1.b = 1
    else
        arg1 = 0

return zx.d(arg1.b)
