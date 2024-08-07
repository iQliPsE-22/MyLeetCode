import java.util.*;

public class temp {
    public static List<String> calculatePoints(String[] matches) {
        Map<String, Integer> teamPoints = new HashMap<>();

        for (String match : matches) {
            String[] parts = match.split(" ");
            String team1 = parts[0];
            String[] scoreAndTeam2 = parts[1].split(":");
            int goalsTeam1 = Integer.parseInt(scoreAndTeam2[0]);
            int goalsTeam2 = Integer.parseInt(scoreAndTeam2[1]);
            String team2 = parts[2];

            if (goalsTeam1 > goalsTeam2) {
                teamPoints.put(team1, teamPoints.getOrDefault(team1, 0) + 3);
                teamPoints.put(team2, teamPoints.getOrDefault(team2, 0));
            } else if (goalsTeam1 < goalsTeam2) {
                teamPoints.put(team2, teamPoints.getOrDefault(team2, 0) + 3);
                teamPoints.put(team1, teamPoints.getOrDefault(team1, 0));
            } else {
                teamPoints.put(team1, teamPoints.getOrDefault(team1, 0) + 1);
                teamPoints.put(team2, teamPoints.getOrDefault(team2, 0) + 1);
            }
        }

        List<Map.Entry<String, Integer>> sortedTeams = new ArrayList<>(teamPoints.entrySet());
        sortedTeams.sort((a, b) -> {
            if (!b.getValue().equals(a.getValue())) {
                return b.getValue() - a.getValue(); // Sort by points descending
            } else {
                return a.getKey().compareTo(b.getKey()); // Sort alphabetically
            }
        });

        List<String> result = new ArrayList<>();
        for (Map.Entry<String, Integer> entry : sortedTeams) {
            result.add(entry.getKey() + " " + entry.getValue());
        }

        return result;
    }

    public static void main(String[] args) {
        String[] matches = {"Liverpool 3:2 PSG", "RedStar 0:0 Napoli", "PSG 6:1 RedStar", "Napoli 1:0 Liverpool"};
        List<String> scoreboard = calculatePoints(matches);
        for (String entry : scoreboard) {
            System.out.println(entry);
        }
    }
}
