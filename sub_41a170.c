// 函数: sub_41a170
// 地址: 0x41a170
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg2
int32_t* ebx = arg1

if (esi s< 0 || esi s> ebx[2])
    *ebx
    ebx, esi = sub_41a080(esi, data_4ac394)

if (ebx[2] == ebx[3])
    (**ebx)()

int32_t eax_3 = ebx[2]

if (esi s< eax_3)
    sub_4030d0(ebx[1] + (esi << 2), ebx[1] + (esi << 2) + 4, (eax_3 - esi) * 4)

int32_t result = ebx[1]
*(result + (esi << 2)) = arg3
ebx[2] += 1

if (arg3 == 0)
    return result

return (*(*ebx + 4))()
