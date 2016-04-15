/* $Id$ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file table/townname.h Namepart tables for the town name generator */

#include "../core/enum_type.hpp"

static const char * const _name_catalan_real[] = {
	"Barcelona",
	"L'Hospitalet de Llobregat",
	"Cerdanyola",
	"Martorell",
	"Badalona",
	"Tarragona",
	"Lleida",
	"Girona",
	"Sabadell",
	"Terrassa",
	"Reus",
	"Valls",
	"Vic",
	"Vielha e Mijaran",
	"Amposta",
	"Tortosa",
	"Berga",
	"Olot",
	"Mollerussa",
	"Banyoles",
	"Figueres",
	"Balaguer",
	"Vilafranca del Pened\xC3\xA8s",
	"La Seu d'Urgell",
	"El Pont de Suert",
	"Igualada",
	"Manresa",
	"Solsona",
	"Les Borges Blanques",
	"Tremp",
	"Sort",
	"Colera",
	"Portbou",
	"El Vendrell",
	"Falset",
	"Ripoll",
	"Cervera",
	"Gandesa",
	"Matar\xC3\xB3",
	"Montblanc",
	"Vilanova i la Geltr\xC3\xBA",
	"T\xC3\xA0rrega",
	"Camprodon",
	"Campdev\xC3\xA0nol",
	"Cambrils",
	"Begur",
	"Setcases",
	"Palafrugell",
	"Begues",
	"El Bruc",
	"Cadaqu\xC3\xA9s",
	"Collbat\xC3\xB3",
	"Cervell\xC3\xB3",
	"Esparreguera",
	"Abrera",
	"Alp",
	"Das",
	"Cercs",
	"Manlleu",
	"El Masnou",
	"Molins de Rei",
	"Monistrol",
	"Rocallaura",
	"Rub\xC3\xAD",
	"Ripollet",
	"Sitges",
	"Roses",
};

static const char * const _name_catalan_pref[] = {
	"El Pont de ",
	"Parets de ",
	"Canet de ",
	"Castellar de ",
	"Corbera de ",
	"Arenys de ",
	"Calella de ",
	"La Seu de ",
	"La Bisbal de ",
	"Torroella de ",
	"Port de ",
	"Vilafranca de ",
	"Vilanova de ",
	"Caldes de ",
	"La Conca de ",
	"Olesa de ",
	"La Roca de ",
	"Sant Esteve de ",
	"Sant Andreu de ",
	"Sant Jordi de ",
	"Sant Joan de ",
	"Sant Feliu de ",
	"Sant Quirze de ",
	"Sant Sadurn\xC3\xAD de ",
	"Santa Coloma de ",
	"Santa Margarida de ",
	"Santa Maria de ",
	"Sant Mart\xC3\xAD de ",
	"Sant Pere de ",
	"Sant Juli\xC3\xA0 de ",
	"Sant Vicen\xC3\xA7 de ",

};

static const char * const _name_catalan_1m[] = {
	"Torrent",
	"Cami",
	"Mont",
	"Bell",
	"Puig",
	"Riu",
};

static const char * const _name_catalan_1f[] = {
	"Pala",
	"Selva",
	"Vall",
	"Serra",
	"Torre",
	"Riba",
	"Cova",
	"Terra",
};

static const char * const _name_catalan_2m[] = {
	"alt",
	"baix",
	"fosc",
	"pelat",
	"vent\xC3\xB3s",
	"negre",
	"roig",
	"gr\xC3\xADs",
};

static const char * const _name_catalan_2f[] = {
	"baixa",
	"alta",
	"fosca",
	"clara",
	"negra",
	"roja",
	"grisa",
	"freda",
};

static const char * const _name_catalan_3[] = {
	" Desp\xC3\xAD",
	" Desvern",
	" del Cam\xC3\xAD",
	" de Mar",
	" de Dalt",
	" de Baix",
	" del Vall\xC3\xA8s",
	" de Bergued\xC3\xA0",
	" de Conflent",
	" de la Plana",
};

static const char * const _name_catalan_river1[] = {
	" d'Anoia",
	" de Ter",
	" de Llobregat",
	" d'Ebre",
	" de Segre",
	" de Francol\xC3\xAD",
};
