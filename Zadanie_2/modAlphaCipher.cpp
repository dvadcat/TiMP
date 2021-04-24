#include "modAlphaCipher.h"

string modAlphaCipher::decoder(const std::string& cipher_st) 
{
    string n_s = cipher_st;
    int dlina, nstrok, position, a; 
    dlina = cipher_st.size(); 
    nstrok = (dlina - 1) / newkey + 1; 
    a = 0;
    for (int colum_number = newkey; colum_number > 0; colum_number--) { 
        for (int line_number = 0; line_number < nstrok; line_number++) { 
            position = newkey*line_number+colum_number; //
            if (position-1 < dlina) {
                n_s[position-1] = cipher_st[a];
                a++;
            }
        }
    }
    return n_s;
}
string modAlphaCipher::coder(const string& open_st) 
{
    string n_s = open_st;
    int dlina, nstrok, position, a; 
    dlina = open_st.size(); 
    nstrok = (dlina - 1) / newkey + 1;
    a = 0;
    for (int colum_number = newkey; colum_number > 0; colum_number--) { 
        for (int line_number = 0; line_number < nstrok; line_number++) { 
            position = colum_number+newkey*line_number;
            if (position-1 < dlina) {
                n_s[a] = open_st[position-1];
                a++;
            }
        }
    }
    return n_s;
}
