/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "crab/TTSHandler.h"
#include "crab/ui/dialogbox.h"

namespace Crab {
void TTSHandler::onEntry(const Common::String &dialog) const {
	Common::TextToSpeechManager *_ttsMan = g_system->getTextToSpeechManager();

	_ttsMan->enable(true);	// Enable text-to-speech
	_ttsMan->setPitch(50);	// Set pitch level
	_ttsMan->setVolume(100);// Set volume level
	_ttsMan->setRate(20);	// Set speech rate
	_ttsMan->setVoice(1);	// Set voice type
	_ttsMan->say(dialog);	// Say text
}

void TTSHandler::onExit() const {
	Common::TextToSpeechManager *_ttsMan = g_system->getTextToSpeechManager();

	_ttsMan->stop();
}

} // End of namespace Crab
